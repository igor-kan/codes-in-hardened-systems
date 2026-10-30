"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1402."""

def spec_graphene_hardened_malloc_1402() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1402, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1402():
    s = spec_graphene_hardened_malloc_1402()
    assert s["spec_id"] == 1402
